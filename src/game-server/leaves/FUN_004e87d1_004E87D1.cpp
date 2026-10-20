// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E87D1 .. +0xDD bytes.
extern "C" __declspec(naked) void FUN_004e87d1_004E87D1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        push 16eh
        push 5cfeb0h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 70 29 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BF 81 04 00: call 0x5309bb
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 12 91 04 00: call 0x531916
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x91
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 67: je 0x4e886f
        __asm _emit 0x74
        __asm _emit 0x67
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CE D4 01 00: call 0x505ce5
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xd4
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 08: jmp 0x4e882a
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 3D: je 0x4e886d
        __asm _emit 0x74
        __asm _emit 0x3d
        push 1
        push 0ch
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 19 76 FE FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e8855
        __asm _emit 0x75
        __asm _emit 0x14
        push 177h
        push 5cfeb0h
        ; Exact mapped bytes E8 B0 C1 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xc1
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e8855
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x4e8830
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 9C 96 04 00: call 0x531f07
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB B5: jmp 0x4e8822
        __asm _emit 0xeb
        __asm _emit 0xb5
        ; Exact mapped bytes EB 36: jmp 0x4e88a5
        __asm _emit 0xeb
        __asm _emit 0x36
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AC D4 01 00: call 0x505d23
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xd4
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 0ch]
        sub edx, 1
        mov dword ptr [ebp - 0ch], edx
        test ecx, ecx
        ; Exact mapped bytes 74 1B: je 0x4e88a5
        __asm _emit 0x74
        __asm _emit 0x1b
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 86 96 04 00: call 0x531f1d
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BF F7 FF FF: call 0x4e8062
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB D5: jmp 0x4e887a
        __asm _emit 0xeb
        __asm _emit 0xd5
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
