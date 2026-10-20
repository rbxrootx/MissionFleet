// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00489DAD .. +0xA4 bytes.
extern "C" __declspec(naked) void FUN_00489dad_00489DAD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 108h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 108h]
        mov ecx, 42h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 104h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 5F: je 0x489e37
        __asm _emit 0x74
        __asm _emit 0x5f
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 59: je 0x489e37
        __asm _emit 0x74
        __asm _emit 0x59
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 53: je 0x489e37
        __asm _emit 0x74
        __asm _emit 0x53
        mov esi, esp
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 1C: call dword ptr [edx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x1c
        cmp esi, esp
        ; Exact mapped bytes E8 E4 E9 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x489e37
        __asm _emit 0x74
        __asm _emit 0x37
        mov esi, esp
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 22 C7 FB FF: call 0x446530
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xc7
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        push 5c482ch
        lea ecx, [ebp - 100h]
        push ecx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 10h
        cmp esi, esp
        ; Exact mapped bytes E8 B5 E9 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 108h], eax
        mov eax, 1
        pop edi
        pop esi
        add esp, 108h
        cmp ebp, esp
        ; Exact mapped bytes E8 95 E9 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
