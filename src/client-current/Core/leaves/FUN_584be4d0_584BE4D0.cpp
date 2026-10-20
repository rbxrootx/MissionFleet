// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584BE4D0 .. +0x1A2 bytes.
extern "C" __declspec(naked) void FUN_584be4d0_584BE4D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 64h]
        sub edx, dword ptr [ecx + 5ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 74h], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 68h]
        sub eax, dword ptr [edx + 60h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 78h], eax
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 75 3F: jne 0x584be542
        __asm _emit 0x75
        __asm _emit 0x3f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 74h]
        cdq
        mov ecx, 0ah
        idiv ecx
        push eax
        ; Exact mapped bytes E8 F9 2D FD FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x2d
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 7ch], eax
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 78h]
        cdq
        mov ecx, 0ah
        idiv ecx
        push eax
        ; Exact mapped bytes E8 DC 2D FD FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x2d
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 80h], eax
        ; Exact mapped bytes EB 15: jmp 0x584be557
        __asm _emit 0xeb
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 7ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 80h], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 7ch], 0
        ; Exact mapped bytes 75 09: jne 0x584be569
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 09: jmp 0x584be572
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        imul eax, dword ptr [ecx + 74h], 3e8h
        cdq
        idiv dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8ch], eax
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 80h], 0
        ; Exact mapped bytes 75 09: jne 0x584be59e
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes EB 0C: jmp 0x584be5aa
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        imul eax, dword ptr [eax + 78h], 3e8h
        cdq
        idiv dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 90h], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 74h], 0
        ; Exact mapped bytes 75 09: jne 0x584be5d3
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 1
        ; Exact mapped bytes EB 09: jmp 0x584be5dc
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        imul eax, dword ptr [edx + 78h], 64h
        cdq
        idiv dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 23 2D FD FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x2d
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 9ch], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 78h], 0
        ; Exact mapped bytes 75 09: jne 0x584be60b
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 1
        ; Exact mapped bytes EB 09: jmp 0x584be614
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 4]
        imul eax, dword ptr [edx + 74h], 64h
        cdq
        idiv dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 EB 2C FD FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x2c
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0a0h], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 9ch], 64h
        ; Exact mapped bytes 7F 11: jg 0x584be64e
        __asm _emit 0x7f
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [eax + 0a8h], edx
        ; Exact mapped bytes EB 1E: jmp 0x584be66c
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 9ch], 64h
        ; Exact mapped bytes 7E 12: jle 0x584be66c
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [ecx + 0a8h], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
