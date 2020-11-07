
// @section machine

// The size of the print bed
#define X_BED_SIZE 260
#define Y_BED_SIZE 225

#define Z_MAX_POS 200

// Name displayed in the LCD "Ready" message and Info menu
#define CUSTOM_MACHINE_NAME "ZYYX Pro"

// @section probes

/**
 * Nozzle-to-Probe offsets { X, Y, Z }
 *
 * - Use a caliper or ruler to measure the distance from the tip of
 *   the Nozzle to the center-point of the Probe in the X and Y axes.
 * - For the Z offset use your best known value and adjust at runtime.
 * - Probe Offsets can be tuned at runtime with 'M851', LCD menus, babystepping, etc.
 *
 * Assuming the typical work area orientation:
 *  - Probe to RIGHT of the Nozzle has a Positive X offset
 *  - Probe to LEFT  of the Nozzle has a Negative X offset
 *  - Probe in BACK  of the Nozzle has a Positive Y offset
 *  - Probe in FRONT of the Nozzle has a Negative Y offset
 *
 * Some examples:
 *   #define NOZZLE_TO_PROBE_OFFSET { 10, 10, -1 }   // Example "1"
 *   #define NOZZLE_TO_PROBE_OFFSET {-10,  5, -1 }   // Example "2"
 *   #define NOZZLE_TO_PROBE_OFFSET {  5, -5, -1 }   // Example "3"
 *   #define NOZZLE_TO_PROBE_OFFSET {-15,-10, -1 }   // Example "4"
 *
 *     +-- BACK ---+
 *     |    [+]    |
 *   L |        1  | R <-- Example "1" (right+,  back+)
 *   E |  2        | I <-- Example "2" ( left-,  back+)
 *   F |[-]  N  [+]| G <-- Nozzle
 *   T |       3   | H <-- Example "3" (right+, front-)
 *     | 4         | T <-- Example "4" ( left-, front-)
 *     |    [-]    |
 *     O-- FRONT --+
 */

#define NOZZLE_TO_PROBE_X_OFFSET (-30)
#define NOZZLE_TO_PROBE_OFFSET { NOZZLE_TO_PROBE_X_OFFSET, 0, 3 }

// Probe is 30 mm to the left of nozzle
#define Z_SAFE_HOMING_X_POINT (X_MAX_POS + NOZZLE_TO_PROBE_X_OFFSET)  // X point for Z homing
#define Z_SAFE_HOMING_Y_POINT Y_MAX_POS  // Y point for Z homing

// @section extras

// Define positions for probing points, use the hotend as reference not the sensor.
#define TRAMMING_POINT_XY { {  248 + NOZZLE_TO_PROBE_X_OFFSET, 214 }, { 82 + NOZZLE_TO_PROBE_X_OFFSET,  214 }, { 166 + NOZZLE_TO_PROBE_X_OFFSET, 17 } }

// @section leveling

/**
 * Points to probe for all 3-point Leveling procedures.
 * Override if the automatically selected points are inadequate.
 */
#define PROBE_PT_1_X (X_MAX_POS + NOZZLE_TO_PROBE_X_OFFSET)
#define PROBE_PT_1_Y Y_MAX_POS
#define PROBE_PT_2_X (78 + NOZZLE_TO_PROBE_X_OFFSET)
#define PROBE_PT_2_Y Y_MAX_POS
#define PROBE_PT_3_X (X_MAX_POS + NOZZLE_TO_PROBE_X_OFFSET)
#define PROBE_PT_3_Y Y_MIN_POS

// @section lcd

#define PROBE_OFFSET_WIZARD_XY_POS { PROBE_PT_2_X, Y_MIN_POS }
