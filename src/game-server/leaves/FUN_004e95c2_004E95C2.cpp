// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E95C2 .. +0x11E bytes.
extern "C" __declspec(naked) void FUN_004e95c2_004E95C2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 75 73: jne 0x4e964a
        __asm _emit 0x75
        __asm _emit 0x73
        push 10h
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 18h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        add eax, 14h
        push eax
        ; Exact mapped bytes E8 64 E6 FF FF: call 0x4e7c50
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 49 85 FF FF: call 0x4e1b40
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 18h]
        sub edx, 1
        shl edx, 4
        mov eax, dword ptr [ebp - 10h]
        add eax, edx
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 18h]
        sub edx, 1
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 12: jmp 0x4e962e
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 0ch]
        sub eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, 10h
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7C 16: jl 0x4e964a
        __asm _emit 0x7c
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [edx], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx + 10h], eax
        ; Exact mapped bytes EB D2: jmp 0x4e961c
        __asm _emit 0xeb
        __asm _emit 0xd2
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x4e9667
        __asm _emit 0x75
        __asm _emit 0x14
        push 8bh
        push 5c4fd0h
        ; Exact mapped bytes E8 9E B3 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xb3
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e9667
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4e964a
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax]
        mov dword ptr [ecx + 10h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 0ch]
        add ecx, 1
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 0ch], ecx
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 7F 14: jg 0x4e96b0
        __asm _emit 0x7f
        __asm _emit 0x14
        push 90h
        push 5c4fd0h
        ; Exact mapped bytes E8 55 B3 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xb3
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e96b0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4e9693
        __asm _emit 0x75
        __asm _emit 0xdd
        push 4
        push 5c4bbch
        mov edx, dword ptr [ebp - 4]
        add edx, 8
        push edx
        ; Exact mapped bytes E8 57 F9 FB FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xf9
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ch], 0
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
