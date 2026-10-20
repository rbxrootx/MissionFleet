// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00484A30 .. +0xBB bytes.
extern "C" __declspec(naked) void FUN_00484a30_00484A30() {
    __asm {
        push ebx
        push esi
        push edi
        push ebp
        xor ebp, ebp
        ; Exact mapped bytes FF 15 E4 B9 68 00: call dword ptr [0x68b9e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov ebx, eax
        push 688de0h
        ; Exact mapped bytes FF 15 68 B9 68 00: call dword ptr [0x68b968]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 39 2D 9C 90 68 00: cmp dword ptr [0x68909c], ebp
        __asm _emit 0x39
        __asm _emit 0x2d
        __asm _emit 0x9c
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 7E 6F: jle 0x484ac0
        __asm _emit 0x7e
        __asm _emit 0x6f
        lea eax, [ebp*4]
        cmp dword ptr [eax + eax*4 + 6890a4h], ebx
        lea esi, [eax + eax*4]
        ; Exact mapped bytes 75 53: jne 0x484ab7
        __asm _emit 0x75
        __asm _emit 0x53
        mov eax, dword ptr [esi + 6890ach]
        dec eax
        mov dword ptr [esi + 6890ach], eax
        ; Exact mapped bytes 74 0C: je 0x484a7f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [esp + 14h]
        cmp dword ptr [esi + 6890a0h], eax
        ; Exact mapped bytes 75 38: jne 0x484ab7
        __asm _emit 0x75
        __asm _emit 0x38
        mov eax, dword ptr [esi + 6890a8h]
        push eax
        ; Exact mapped bytes FF 15 20 BF 68 00: call dword ptr [0x68bf20]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes FF 0D 9C 90 68 00: dec dword ptr [0x68909c]
        __asm _emit 0xff
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 3B 2D 9C 90 68 00: cmp ebp, dword ptr [0x68909c]
        __asm _emit 0x3b
        __asm _emit 0x2d
        __asm _emit 0x9c
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 7D 1D: jge 0x484ab7
        __asm _emit 0x7d
        __asm _emit 0x1d
        lea edi, [esi + 6890a0h]
        lea eax, [edi + 14h]
        mov ecx, 5
        mov esi, eax
        inc ebp
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov edi, eax
        ; Exact mapped bytes 3B 2D 9C 90 68 00: cmp ebp, dword ptr [0x68909c]
        __asm _emit 0x3b
        __asm _emit 0x2d
        __asm _emit 0x9c
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 7C E9: jl 0x484aa0
        __asm _emit 0x7c
        __asm _emit 0xe9
        inc ebp
        ; Exact mapped bytes 3B 2D 9C 90 68 00: cmp ebp, dword ptr [0x68909c]
        __asm _emit 0x3b
        __asm _emit 0x2d
        __asm _emit 0x9c
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 7C 91: jl 0x484a51
        __asm _emit 0x7c
        __asm _emit 0x91
        push 688de0h
        ; Exact mapped bytes FF 0D 44 90 68 00: dec dword ptr [0x689044]
        __asm _emit 0xff
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 6C B9 68 00: call dword ptr [0x68b96c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 44 90 68 00 00: cmp dword ptr [0x689044], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 05: jne 0x484adf
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 61 0C 00 00: call 0x485740
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        pop ebp
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
