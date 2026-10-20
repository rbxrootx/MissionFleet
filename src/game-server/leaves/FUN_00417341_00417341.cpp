// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00417341 .. +0x143 bytes.
extern "C" __declspec(naked) void FUN_00417341_00417341() {
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
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 07: jne 0x417368
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 0C 01 00 00: jmp 0x417474
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0ffh
        ; Exact mapped bytes 0F 84 8C 00 00 00: je 0x41740a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 4
        mov dword ptr [ebp - 0ch], 0
        lea edx, [ebp - 8]
        push edx
        lea eax, [ebp - 0ch]
        push eax
        lea ecx, [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 F3 EA FF FF: call 0x415e90
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x4173ab
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 C9 00 00 00: jmp 0x417474
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [eax + ecx*4 + 78h], -1
        ; Exact mapped bytes 75 19: jne 0x4173d7
        __asm _emit 0x75
        __asm _emit 0x19
        push 1
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7C F8 FF FF: call 0x416c4c
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 9D 00 00 00: jmp 0x417474
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4 + 78h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FF 3C 03 00: call 0x44b0ef
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x3c
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x41740a
        __asm _emit 0x75
        __asm _emit 0x16
        push 2
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 46 F8 FF FF: call 0x416c4c
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 6A: jmp 0x417474
        __asm _emit 0xeb
        __asm _emit 0x6a
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov al, byte ptr [ebp - 4]
        mov byte ptr [edx + 91h], al
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 15 FC FF FF: call 0x41703d
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 18h], 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 1ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 18h]
        shl edx, 10h
        mov eax, dword ptr [ebp - 10h]
        or edx, dword ptr [eax + 1ch]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 20h], edx
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 20h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 8002f003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C3 FD 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xfd
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, 1
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 62 13 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x13
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
