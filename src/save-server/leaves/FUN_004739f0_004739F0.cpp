// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004739F0 .. +0x10F bytes.
extern "C" __declspec(naked) void FUN_004739f0_004739F0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes A1 7C 89 68 00: mov eax, dword ptr [0x68897c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 3B 05 58 89 68 00: cmp eax, dword ptr [0x688958]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x58
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 75 4A: jne 0x473a4b
        __asm _emit 0x75
        __asm _emit 0x4a
        ; Exact mapped bytes 8B 0D 58 89 68 00: mov ecx, dword ptr [0x688958]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        add ecx, 10h
        imul ecx, ecx, 14h
        push ecx
        ; Exact mapped bytes 8B 15 80 89 68 00: mov edx, dword ptr [0x688980]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        push 0
        ; Exact mapped bytes A1 88 89 68 00: mov eax, dword ptr [0x688988]
        __asm _emit 0xa1
        __asm _emit 0x88
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 5C B8 68 00: call dword ptr [0x68b85c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 07: jne 0x473a33
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 C8 00 00 00: jmp 0x473afb
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 89 0D 80 89 68 00: mov dword ptr [0x688980], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 58 89 68 00: mov edx, dword ptr [0x688958]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        add edx, 10h
        ; Exact mapped bytes 89 15 58 89 68 00: mov dword ptr [0x688958], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A1 7C 89 68 00: mov eax, dword ptr [0x68897c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        imul eax, eax, 14h
        ; Exact mapped bytes 8B 0D 80 89 68 00: mov ecx, dword ptr [0x688980]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        add ecx, eax
        mov dword ptr [ebp - 4], ecx
        push 41c4h
        push 8
        ; Exact mapped bytes 8B 15 88 89 68 00: mov edx, dword ptr [0x688988]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 60 B8 68 00: call dword ptr [0x68b860]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10h], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 10h], 0
        ; Exact mapped bytes 75 04: jne 0x473a85
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 76: jmp 0x473afb
        __asm _emit 0xeb
        __asm _emit 0x76
        push 4
        push 2000h
        push 100000h
        push 0
        ; Exact mapped bytes FF 15 58 B8 68 00: call dword ptr [0x68b858]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ch], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0ch], 0
        ; Exact mapped bytes 75 1A: jne 0x473ac2
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        push 0
        ; Exact mapped bytes 8B 15 88 89 68 00: mov edx, dword ptr [0x688988]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 68 B8 68 00: call dword ptr [0x68b868]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 39: jmp 0x473afb
        __asm _emit 0xeb
        __asm _emit 0x39
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], 0ffffffffh
        ; Exact mapped bytes A1 7C 89 68 00: mov eax, dword ptr [0x68897c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        ; Exact mapped bytes A3 7C 89 68 00: mov dword ptr [0x68897c], eax
        __asm _emit 0xa3
        __asm _emit 0x7c
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [edx], 0ffffffffh
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
