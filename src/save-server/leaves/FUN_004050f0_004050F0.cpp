// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004050F0 .. +0xB7 bytes.
extern "C" __declspec(naked) void FUN_004050f0_004050F0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58a89ch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 4ch
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 58h]
        mov ecx, 13h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 6330b4h
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 74 1F: je 0x40515a
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 5C 73 0C 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x73
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 3D 73 0C 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x73
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 10h
        ; Exact mapped bytes E8 9A C3 FF FF: call 0x401514
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 10h
        ; Exact mapped bytes E8 D0 C6 FF FF: call 0x40185c
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 58h
        cmp ebp, esp
        ; Exact mapped bytes E8 4D FC 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xfc
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
