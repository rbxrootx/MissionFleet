// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00431610 .. +0x280 bytes.
extern "C" __declspec(naked) void FUN_00431610_00431610() {
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
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x431637
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 53 02 00 00: jmp 0x43188a
        __asm _emit 0xe9
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 07: jne 0x431644
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 46 02 00 00: jmp 0x43188a
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x431656
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 64h
        ; Exact mapped bytes 0F 83 28 02 00 00: jae 0x431888
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 37ch
        cmp dword ptr [edx + eax + 2e4h], 0
        ; Exact mapped bytes 0F 85 03 02 00 00: jne 0x431883
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 0e000h
        shr ecx, 0dh
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 10h]
        and edx, 1fe0h
        shr edx, 5
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp + 10h]
        and eax, 1fh
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 10h
        and ecx, 0ffffh
        cmp ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 75 0A: jne 0x4316d8
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 B2 01 00 00: jmp 0x43188a
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x4316ea
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 0F 83 8F 01 00 00: jae 0x431883
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x8f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        and eax, 1fe0h
        shr eax, 5
        cmp eax, 1
        ; Exact mapped bytes 75 36: jne 0x43173a
        __asm _emit 0x75
        __asm _emit 0x36
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 4
        and ecx, 0ffh
        cmp ecx, 1
        ; Exact mapped bytes 72 0A: jb 0x431735
        __asm _emit 0x72
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 55 01 00 00: jmp 0x43188a
        __asm _emit 0xe9
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 44 01 00 00: jmp 0x43187e
        __asm _emit 0xe9
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        and edx, 1fe0h
        shr edx, 5
        cmp edx, 2
        ; Exact mapped bytes 75 35: jne 0x431780
        __asm _emit 0x75
        __asm _emit 0x35
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        cmp eax, 3
        ; Exact mapped bytes 72 0A: jb 0x43177b
        __asm _emit 0x72
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 0F 01 00 00: jmp 0x43188a
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 FE 00 00 00: jmp 0x43187e
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 1fe0h
        shr ecx, 5
        cmp ecx, 3
        ; Exact mapped bytes 75 36: jne 0x4317c7
        __asm _emit 0x75
        __asm _emit 0x36
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 5
        ; Exact mapped bytes 72 0A: jb 0x4317c2
        __asm _emit 0x72
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 C8 00 00 00: jmp 0x43188a
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 B7 00 00 00: jmp 0x43187e
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        and eax, 1fe0h
        shr eax, 5
        cmp eax, 4
        ; Exact mapped bytes 75 33: jne 0x43180a
        __asm _emit 0x75
        __asm _emit 0x33
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 4
        and ecx, 0ffh
        cmp ecx, 16h
        ; Exact mapped bytes 72 0A: jb 0x431808
        __asm _emit 0x72
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 82 00 00 00: jmp 0x43188a
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 74: jmp 0x43187e
        __asm _emit 0xeb
        __asm _emit 0x74
        mov edx, dword ptr [ebp + 10h]
        and edx, 1fe0h
        shr edx, 5
        cmp edx, 5
        ; Exact mapped bytes 75 2F: jne 0x43184a
        __asm _emit 0x75
        __asm _emit 0x2f
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        cmp eax, 1ch
        ; Exact mapped bytes 72 07: jb 0x431848
        __asm _emit 0x72
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 42: jmp 0x43188a
        __asm _emit 0xeb
        __asm _emit 0x42
        ; Exact mapped bytes EB 34: jmp 0x43187e
        __asm _emit 0xeb
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [edx + 168h]
        xor edx, edx
        mov dl, byte ptr [ecx + eax + 2f0h]
        mov eax, dword ptr [ebp + 10h]
        and eax, 1fe0h
        shr eax, 5
        cmp edx, eax
        ; Exact mapped bytes 75 07: jne 0x43187e
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 0C: jmp 0x43188a
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes E9 5E FE FF FF: jmp 0x4316e1
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 C5 FD FF FF: jmp 0x43164d
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
