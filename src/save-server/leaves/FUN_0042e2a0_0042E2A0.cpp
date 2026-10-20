// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042E2A0 .. +0xA2 bytes.
extern "C" __declspec(naked) void FUN_0042e2a0_0042E2A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4]
        mov dword ptr [ebp - 8], edx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 0F: jmp 0x42e2e3
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 49: je 0x42e332
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 3D: jne 0x42e330
        __asm _emit 0x75
        __asm _emit 0x3d
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 17: jne 0x42e310
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [ebp + 8]
        and edx, 0ffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 8]
        mov dword ptr [eax + edx*4], ecx
        ; Exact mapped bytes EB 0C: jmp 0x42e31c
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ecx
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 7E E1 09 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xe1
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 02: jmp 0x42e332
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB A2: jmp 0x42e2d4
        __asm _emit 0xeb
        __asm _emit 0xa2
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 B4 6A 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x6a
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
