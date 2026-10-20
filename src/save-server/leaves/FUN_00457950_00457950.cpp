// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00457950 .. +0xA7 bytes.
extern "C" __declspec(naked) void FUN_00457950_00457950() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 21: jne 0x457983
        __asm _emit 0x75
        __asm _emit 0x21
        push 677828h
        push 0
        push 7ceh
        push 677614h
        push 2
        ; Exact mapped bytes E8 E6 54 01 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x457983
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D3: jne 0x45795c
        __asm _emit 0x75
        __asm _emit 0xd3
        mov ecx, dword ptr [ebp + 8]
        imul ecx, ecx, 30h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 10h]
        cmp dword ptr [eax + ecx + 10h], 10h
        ; Exact mapped bytes 74 21: je 0x4579bd
        __asm _emit 0x74
        __asm _emit 0x21
        push 6777f0h
        push 0
        push 7cfh
        push 677614h
        push 2
        ; Exact mapped bytes E8 AC 54 01 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4579bd
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 C6: jne 0x457989
        __asm _emit 0x75
        __asm _emit 0xc6
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 21 F0 FF FF: call 0x4569f0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
