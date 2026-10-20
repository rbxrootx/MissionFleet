// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00515B6B .. +0xDF bytes.
extern "C" __declspec(naked) void FUN_00515b6b_00515B6B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 F8 5F 02 00: call 0x53bb74
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x5f
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E8 D1 F3 02 00: call 0x544f55
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xf3
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 75 53: jne 0x515be0
        __asm _emit 0x75
        __asm _emit 0x53
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 108h], 0
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 60h]
        and edx, 8
        test edx, edx
        ; Exact mapped bytes 74 2A: je 0x515bd1
        __asm _emit 0x74
        __asm _emit 0x2a
        push 0
        push 0e001h
        push 375h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1E 60 02 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 60h]
        and ecx, 0fffffff7h
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 60h], ecx
        mov eax, 1
        ; Exact mapped bytes EB 73: jmp 0x515c44
        __asm _emit 0xeb
        __asm _emit 0x73
        push 0e000h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 46 6E 02 00: call 0x53ca24
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x6e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 62: jmp 0x515c42
        __asm _emit 0xeb
        __asm _emit 0x62
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 60h]
        and ecx, 8
        test ecx, ecx
        ; Exact mapped bytes 74 0E: je 0x515bfb
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 104h]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 47: je 0x515c42
        __asm _emit 0x74
        __asm _emit 0x47
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 108h], edx
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        push 362h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BF 5F 02 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x5f
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 60h]
        or edx, 8
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 60h], edx
        push 0c8h
        push 0e001h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 18 FD FF FF: call 0x515953
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x515c44
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
