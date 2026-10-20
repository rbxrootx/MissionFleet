// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00417203 .. +0x13E bytes.
extern "C" __declspec(naked) void FUN_00417203_00417203() {
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
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 8]
        imul edx, edx, 370h
        mov dword ptr [ecx + edx + 16c38h], 0
        mov eax, dword ptr [ebp + 8]
        shl eax, 10h
        or al, 2
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes 8B 15 7C CB 5D 00: mov edx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [edx + 40ca8h]
        ; Exact mapped bytes E8 5D B4 06 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xb4
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + edx*4 + 78h], 0ffffffffh
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 168h]
        xor edx, edx
        mov dl, byte ptr [ecx + 91h]
        cmp dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes 75 51: jne 0x4172d3
        __asm _emit 0x75
        __asm _emit 0x51
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 168h]
        mov byte ptr [ecx + 91h], 0ffh
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x4172a4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 5
        ; Exact mapped bytes 7D 29: jge 0x4172d3
        __asm _emit 0x7d
        __asm _emit 0x29
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + edx*4 + 78h], -1
        ; Exact mapped bytes 74 14: je 0x4172d1
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 168h]
        mov dl, byte ptr [ebp - 0ch]
        mov byte ptr [ecx + 91h], dl
        ; Exact mapped bytes EB 02: jmp 0x4172d3
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB C8: jmp 0x41729b
        __asm _emit 0xeb
        __asm _emit 0xc8
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 5E FD FF FF: call 0x41703d
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 8]
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16c04h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A5 07 00 00: call 0x417aac
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes 66 8B 4D 08: mov cx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 40c98h]
        ; Exact mapped bytes E8 55 3B 02 00: call 0x43ae81
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x3b
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, 1
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 A5 14 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x14
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
