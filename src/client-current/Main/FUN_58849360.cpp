// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58849360 .. +0xD8 bytes.
// Source symbol alias: FUN_58849360.
extern "C" __declspec(naked) void FUN_58849360() {
    __asm {
        // 0x58849360: sub esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x20
        // 0x58849363: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58849368: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5884936A: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5884936E: push ebx
        __asm _emit 0x53
        // 0x5884936F: push esi
        __asm _emit 0x56
        // 0x58849370: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58849372: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58849374: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58849376: mov word ptr [ebx + 0xf2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884937D: cmp dword ptr [esp + 0x34], esi
        __asm _emit 0x39
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58849381: je 0x5884940e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849387: push ebp
        __asm _emit 0x55
        // 0x58849388: mov ebp, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5884938C: push edi
        __asm _emit 0x57
        // 0x5884938D: mov edi, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58849391: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58849395: dec ebp
        __asm _emit 0x4D
        // 0x58849396: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58849398: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5884939C: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588493A0: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588493A4: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588493A8: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588493AC: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588493B0: mov al, byte ptr [esi + edi]
        __asm _emit 0x8A
        __asm _emit 0x04
        __asm _emit 0x3E
        // 0x588493B3: cmp al, 0x3b
        __asm _emit 0x3C
        __asm _emit 0x3B
        // 0x588493B5: je 0x588493cf
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x588493B7: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588493BB: jmp 0x588493c0
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x588493BD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x588493C0: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x588493C2: je 0x588493cf
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588493C4: inc esi
        __asm _emit 0x46
        // 0x588493C5: mov byte ptr [ecx], al
        __asm _emit 0x88
        __asm _emit 0x01
        // 0x588493C7: mov al, byte ptr [esi + edi]
        __asm _emit 0x8A
        __asm _emit 0x04
        __asm _emit 0x3E
        // 0x588493CA: inc ecx
        __asm _emit 0x41
        // 0x588493CB: cmp al, 0x3b
        __asm _emit 0x3C
        __asm _emit 0x3B
        // 0x588493CD: jne 0x588493c0
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x588493CF: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588493D3: push ecx
        __asm _emit 0x51
        // 0x588493D4: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x588493D6: call 0x588490f0
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588493DB: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x588493DD: je 0x588493fd
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x588493DF: movsx edx, word ptr [ebx + 0xf2]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x93
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588493E6: cmp edx, dword ptr [esp + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588493EA: je 0x588493fd
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588493EC: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588493F0: inc eax
        __asm _emit 0x40
        // 0x588493F1: inc esi
        __asm _emit 0x46
        // 0x588493F2: cmp eax, 0x1000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588493F7: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588493FB: jl 0x58849396
        __asm _emit 0x7C
        __asm _emit 0x99
        // 0x588493FD: movsx eax, word ptr [ebx + 0xf2]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x83
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849404: pop edi
        __asm _emit 0x5F
        // 0x58849405: pop ebp
        __asm _emit 0x5D
        // 0x58849406: cmp eax, dword ptr [esp + 0x34]
        __asm _emit 0x3B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5884940A: je 0x58849413
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x5884940C: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5884940E: call 0x58848680
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58849413: mov ecx, dword ptr [ebx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x30
        // 0x58849416: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58849418: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x5884941B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884941D: push 0xee49
        __asm _emit 0x68
        __asm _emit 0x49
        __asm _emit 0xEE
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849422: push ebx
        __asm _emit 0x53
        // 0x58849423: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58849425: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58849429: pop esi
        __asm _emit 0x5E
        // 0x5884942A: pop ebx
        __asm _emit 0x5B
        // 0x5884942B: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5884942D: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0x37
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x58849432: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x20
        // 0x58849435: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
