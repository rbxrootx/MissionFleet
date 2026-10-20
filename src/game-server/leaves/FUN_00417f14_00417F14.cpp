// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00417F14 .. +0x159 bytes.
extern "C" __declspec(naked) void FUN_00417f14_00417F14() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 8], 1
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x417f4a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 5
        ; Exact mapped bytes 7D 42: jge 0x417f92
        __asm _emit 0x7d
        __asm _emit 0x42
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + ecx*4], -1
        ; Exact mapped bytes 74 34: je 0x417f90
        __asm _emit 0x74
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + eax*4]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 81 31 03 00: call 0x44b0ef
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x31
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 1E: jne 0x417f90
        __asm _emit 0x75
        __asm _emit 0x1e
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + eax*4], 0ffffffffh
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 14h], 0
        ; Exact mapped bytes EB AF: jmp 0x417f41
        __asm _emit 0xeb
        __asm _emit 0xaf
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        mov cl, byte ptr [eax + 19h]
        cmp ecx, 0ffh
        ; Exact mapped bytes 0F 84 B4 00 00 00: je 0x41805a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 0ch], 4
        mov byte ptr [ebp - 10h], 0
        lea edx, [ebp - 0ch]
        push edx
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 19h
        push ecx
        ; Exact mapped bytes E8 1E 01 00 00: call 0x4180e0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 52: je 0x41801b
        __asm _emit 0x74
        __asm _emit 0x52
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        mov al, byte ptr [edx + 19h]
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + eax*4], -1
        ; Exact mapped bytes 75 3F: jne 0x418019
        __asm _emit 0x75
        __asm _emit 0x3f
        mov dword ptr [ebp - 8], 0
        mov edx, dword ptr [ebp + 0ch]
        mov byte ptr [edx + 19h], 0ffh
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x417ffa
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 5
        ; Exact mapped bytes 7D 19: jge 0x418019
        __asm _emit 0x7d
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + ecx*4], -1
        ; Exact mapped bytes 74 0B: je 0x418017
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 0ch]
        mov cl, byte ptr [ebp - 4]
        mov byte ptr [eax + 19h], cl
        ; Exact mapped bytes EB 02: jmp 0x418019
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB D8: jmp 0x417ff1
        __asm _emit 0xeb
        __asm _emit 0xd8
        ; Exact mapped bytes EB 3F: jmp 0x41805a
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov dword ptr [ebp - 8], 0
        mov edx, dword ptr [ebp + 0ch]
        mov byte ptr [edx + 19h], 0ffh
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x41803b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 5
        ; Exact mapped bytes 7D 19: jge 0x41805a
        __asm _emit 0x7d
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + ecx*4], -1
        ; Exact mapped bytes 74 0B: je 0x418058
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 0ch]
        mov cl, byte ptr [ebp - 4]
        mov byte ptr [eax + 19h], cl
        ; Exact mapped bytes EB 02: jmp 0x41805a
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB D8: jmp 0x418032
        __asm _emit 0xeb
        __asm _emit 0xd8
        mov eax, dword ptr [ebp - 8]
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 79 07 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x07
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
