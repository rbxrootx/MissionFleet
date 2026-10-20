// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047DE80 .. +0x20D bytes.
extern "C" __declspec(naked) void FUN_0047de80_0047DE80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0
        xor eax, eax
        ; Exact mapped bytes 66 A1 A4 75 68 00: mov ax, word ptr [0x6875a4]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 08: jne 0x47dea6
        __asm _emit 0x75
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 E3 01 00 00: jmp 0x47e089
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        add ecx, 0ch
        push ecx
        push 15h
        mov edx, dword ptr [ebp - 4]
        push edx
        push 1
        ; Exact mapped bytes E8 C6 39 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 8]
        or ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 10h
        push edx
        push 14h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 A7 39 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 8]
        or ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 14h
        push edx
        push 16h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 88 39 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 8]
        or ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 18h
        push edx
        push 17h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 69 39 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 8]
        or ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 1ch
        push edx
        push 18h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 4A 39 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 8]
        or ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes E8 43 01 00 00: call 0x47e090
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp + 8]
        add ecx, 20h
        push ecx
        push 50h
        mov edx, dword ptr [ebp - 4]
        push edx
        push 1
        ; Exact mapped bytes E8 1C 39 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 8]
        or ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 24h
        push edx
        push 51h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 FD 38 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 8]
        or ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 28h
        push edx
        push 1ah
        mov eax, dword ptr [ebp - 4]
        push eax
        push 0
        ; Exact mapped bytes E8 DE 38 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 8]
        or ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 29h
        push edx
        push 19h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 0
        ; Exact mapped bytes E8 BF 38 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 8]
        or ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 2ah
        push edx
        push 54h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 0
        ; Exact mapped bytes E8 A0 38 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 8]
        or ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 2bh
        push edx
        push 55h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 0
        ; Exact mapped bytes E8 81 38 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 8]
        or ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 2ch
        push edx
        push 56h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 0
        ; Exact mapped bytes E8 62 38 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 8]
        or ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 2dh
        push edx
        push 57h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 0
        ; Exact mapped bytes E8 43 38 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 8]
        or ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 2eh
        push edx
        push 52h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 0
        ; Exact mapped bytes E8 24 38 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 8]
        or ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 2fh
        push edx
        push 53h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 0
        ; Exact mapped bytes E8 05 38 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 8]
        or ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
