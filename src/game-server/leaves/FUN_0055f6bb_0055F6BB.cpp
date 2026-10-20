// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055F6BB .. +0xD2 bytes.
extern "C" __declspec(naked) void FUN_0055f6bb_0055F6BB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 33bh
        push 5cff18h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 86 BA F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xba
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x55f6f7
        __asm _emit 0x75
        __asm _emit 0x14
        push 33ch
        push 5cff18h
        ; Exact mapped bytes E8 0E 53 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x53
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55f6f7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x55f6da
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9F 87 FF FF: call 0x557ea4
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x87
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x55f71d
        __asm _emit 0x75
        __asm _emit 0x14
        push 33dh
        push 5cff18h
        ; Exact mapped bytes E8 E8 52 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55f71d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x55f6fd
        __asm _emit 0x75
        __asm _emit 0xda
        push 58e460h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 20h]
        push edx
        ; Exact mapped bytes E8 52 C7 FE FF: call 0x54be86
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xc7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 0C: jne 0x55f749
        __asm _emit 0x75
        __asm _emit 0x0c
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 EC 37 FF FF: call 0x552f33
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 3D: jmp 0x55f786
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 51 14: call dword ptr [ecx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 30h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 30h], 0
        ; Exact mapped bytes 7D 0C: jge 0x55f77c
        __asm _emit 0x7d
        __asm _emit 0x0c
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B9 37 FF FF: call 0x552f33
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0A: jmp 0x55f786
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 4ch], 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
