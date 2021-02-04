#pragma once

namespace Terrorist {
	enum BoneId {
		pelvis,
		spine_0,
		spine_1,
		spine_2,
		spine_3,
		neck_0,
		head_0,
		clavicle_L,
		arm_upper_L,
		arm_lower_L,
		hand_L,
		finger_middle_meta_L,
		finger_middle_0_L,
		finger_middle_1_L,
		finger_middle_2_L,
		finger_pinky_meta_L,
		finger_pinky_0_L,
		finger_pinky_1_L,
		finger_pinky_2_L,
		finger_index_meta_L,
		finger_index_0_L,
		finger_index_1_L,
		finger_index_2_L,
		finger_thumb_0_L,
		finger_thumb_1_L,
		finger_thumb_2_L,
		finger_ring_meta_L,
		finger_ring_0_L,
		finger_ring_1_L,
		finger_ring_2_L,
		weapon_hand_L,
		arm_lower_L_TWIST,
		arm_lower_L_TWIST1,
		arm_upper_L_TWIST,
		arm_upper_L_TWIST1,
		clavicle_R,
		arm_upper_R,
		arm_lower_R,
		hand_R,
		finger_middle_meta_R,
		finger_middle_0_R,
		finger_middle_1_R,
		finger_middle_2_R,
		finger_pinky_meta_R,
		finger_pinky_0_R,
		finger_pinky_1_R,
		finger_pinky_2_R,
		finger_index_meta_R,
		finger_index_0_R,
		finger_index_1_R,
		finger_index_2_R,
		finger_thumb_0_R,
		finger_thumb_1_R,
		finger_thumb_2_R,
		finger_ring_meta_R,
		finger_ring_0_R,
		finger_ring_1_R,
		finger_ring_2_R,
		weapon_hand_R,
		arm_lower_R_TWIST,
		arm_lower_R_TWIST1,
		arm_upper_R_TWIST,
		arm_upper_R_TWIST1,
		leg_upper_L,
		leg_lower_L,
		ankle_L,
		ball_L,
		leg_upper_L_TWIST,
		leg_upper_L_TWIST1,
		leg_upper_R,
		leg_lower_R,
		ankle_R,
		ball_R,
		leg_upper_R_TWIST,
		leg_upper_R_TWIST1,
		ValveBiped_weapon_bone,
		lh_ik_driver,
		lean_root,
		lfoot_lock,
		rfoot_lock,
		primary_jiggle_jnt,
		primary_smg_jiggle_jnt
	};
}

namespace CounterTerrorist {
	enum BoneId {
		pelvis,
		spine_0,
		spine_1,
		spine_2,
		spine_3,
		neck_0,
		head_0,
		clavicle_L,
		arm_upper_L = 9,
		arm_lower_L = 10,
		hand_L = 11,
		arm_upper_R = 39,
		arm_lower_R = 40,
		hand_R = 41,
		leg_upper_L = 72,
		leg_lower_L = 69,
		ankle_L = 70,
		leg_upper_R = 78,
		leg_lower_R = 75,
		ankle_R = 76
	};
}