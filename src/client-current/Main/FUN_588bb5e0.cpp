// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 266 bytes in 1 exact ranges.
// Source symbol alias: FUN_588bb5e0.

// Ghidra body range 0x588BB5E0..0x588BB6EA; 266 mapped bytes.
extern "C" __declspec(naked) void FUN_588bb5e0_segment_00() {
    __asm {
        // 0x588BB5E0: push ecx
        __asm _emit 0x51
        // 0x588BB5E1: push ebx
        __asm _emit 0x53
        // 0x588BB5E2: push edi
        __asm _emit 0x57
        // 0x588BB5E3: xor bl, bl
        __asm _emit 0x32
        __asm _emit 0xDB
        // 0x588BB5E5: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x588BB5E7: mov byte ptr [esp + 0xb], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x0B
        // 0x588BB5EB: cmp byte ptr [edi + 0xa0], bl
        __asm _emit 0x38
        __asm _emit 0x9F
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB5F1: jbe 0x588bb6e4
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0xED
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB5F7: push ebp
        __asm _emit 0x55
        // 0x588BB5F8: push esi
        __asm _emit 0x56
        // 0x588BB5F9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB600: cmp dword ptr [esp + 0x18], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x588BB605: je 0x588bb618
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588BB607: movzx eax, bl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC3
        // 0x588BB60A: cmp dword ptr [edi + eax*4 + 0xfa4], 0
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0x87
        __asm _emit 0xA4
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB612: jne 0x588bb6d0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB618: movzx esi, bl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xF3
        // 0x588BB61B: mov al, byte ptr [edi + esi*4 + 0x6a4]
        __asm _emit 0x8A
        __asm _emit 0x84
        __asm _emit 0xB7
        __asm _emit 0xA4
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB622: mov ecx, dword ptr [edi + esi*4 + 0xda4]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xB7
        __asm _emit 0xA4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB629: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588BB62D: and al, 1
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x588BB62F: mov ebp, 0xfffe
        __asm _emit 0xBD
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB634: and dx, bp
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD5
        // 0x588BB637: movzx ax, al
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC0
        // 0x588BB63B: or dx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD0
        // 0x588BB63E: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588BB642: mov ebp, dword ptr [edi + esi*4 + 0xda4]
        __asm _emit 0x8B
        __asm _emit 0xAC
        __asm _emit 0xB7
        __asm _emit 0xA4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB649: mov cx, word ptr [edi + esi*2 + 0x8a4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x77
        __asm _emit 0xA4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB651: mov word ptr [ebp + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0x26
        // 0x588BB655: mov ecx, dword ptr [ebp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x40
        // 0x588BB658: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588BB65A: je 0x588bb662
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588BB65C: push ebp
        __asm _emit 0x55
        // 0x588BB65D: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BB662: mov ecx, dword ptr [ebp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x30
        // 0x588BB665: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588BB667: je 0x588bb66f
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588BB669: push ebp
        __asm _emit 0x55
        // 0x588BB66A: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BB66F: mov ecx, dword ptr [edi + esi*4 + 0xda4]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xB7
        __asm _emit 0xA4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB676: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB67B: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0x76
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BB680: mov ebp, dword ptr [edi + esi*4 + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0xAC
        __asm _emit 0xB7
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB687: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x588BB689: je 0x588bb6a6
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x588BB68B: mov ebx, dword ptr [edi + esi*4 + 0xda4]
        __asm _emit 0x8B
        __asm _emit 0x9C
        __asm _emit 0xB7
        __asm _emit 0xA4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB692: push ebx
        __asm _emit 0x53
        // 0x588BB693: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x588BB695: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BB69A: push ebx
        __asm _emit 0x53
        // 0x588BB69B: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x588BB69D: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BB6A2: mov bl, byte ptr [esp + 0x13]
        __asm _emit 0x8A
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x13
        // 0x588BB6A6: mov edx, dword ptr [edi + esi*8 + 0x2a8]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0xF7
        __asm _emit 0xA8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB6AD: mov eax, dword ptr [edi + esi*8 + 0x2a4]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xF7
        __asm _emit 0xA4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB6B4: mov ecx, dword ptr [edi + esi*4 + 0xda4]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xB7
        __asm _emit 0xA4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB6BB: push edx
        __asm _emit 0x52
        // 0x588BB6BC: push eax
        __asm _emit 0x50
        // 0x588BB6BD: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0x7B
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BB6C2: mov ecx, dword ptr [edi + esi*4 + 0xda4]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xB7
        __asm _emit 0xA4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB6C9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588BB6CB: call 0x5877cbe0
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x15
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588BB6D0: inc bl
        __asm _emit 0xFE
        __asm _emit 0xC3
        // 0x588BB6D2: mov byte ptr [esp + 0x13], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x13
        // 0x588BB6D6: cmp bl, byte ptr [edi + 0xa0]
        __asm _emit 0x3A
        __asm _emit 0x9F
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB6DC: jb 0x588bb600
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0x1E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588BB6E2: pop esi
        __asm _emit 0x5E
        // 0x588BB6E3: pop ebp
        __asm _emit 0x5D
        // 0x588BB6E4: pop edi
        __asm _emit 0x5F
        // 0x588BB6E5: pop ebx
        __asm _emit 0x5B
        // 0x588BB6E6: pop ecx
        __asm _emit 0x59
        // 0x588BB6E7: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
