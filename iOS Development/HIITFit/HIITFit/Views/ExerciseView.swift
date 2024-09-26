//
//  ExerciseView.swift
//  HIITFit
//
//  Created by Daniel Oh on 9/25/24.
//

import SwiftUI


struct ExerciseView: View {
    let videoNames = ["squat", "step", "burpee", "sun-salute"]
    let exerciseNames = ["Squat", "Step", "Burpee", "Sun Salute"]
    let index: Int
        var body: some View {
            Text(exerciseNames[index])
    }
}


#Preview {
    ExerciseView(index: 0)
}
