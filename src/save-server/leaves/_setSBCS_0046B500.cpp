// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046B500 .. +0x74 bytes.
extern "C" __declspec(naked) void _setSBCS_0046B500() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x46b516
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 101h
        ; Exact mapped bytes 7D 0C: jge 0x46b52b
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 688ca0h], 0
        ; Exact mapped bytes EB E2: jmp 0x46b50d
        __asm _emit 0xeb
        __asm _emit 0xe2
        ; Exact mapped bytes C7 05 00 8B 68 00 00 00 00 00: mov dword ptr [0x688b00], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 8C 8B 68 00 00 00 00 00: mov dword ptr [0x688b8c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x8c
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 A4 8D 68 00 00 00 00 00: mov dword ptr [0x688da4], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xa4
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x46b55b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 6
        ; Exact mapped bytes 7D 0F: jge 0x46b570
        __asm _emit 0x7d
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 C7 04 45 80 8B 68 00 00 00: mov word ptr [eax*2 + 0x688b80], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x45
        __asm _emit 0x80
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB E2: jmp 0x46b552
        __asm _emit 0xeb
        __asm _emit 0xe2
        mov esp, ebp
        pop ebp
        ret
    }
}
