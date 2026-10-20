// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587930E0 .. +0x9D bytes.
extern "C" __declspec(naked) void FUN_587930e0_587930E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 18h], 1
        ; Exact mapped bytes EB 09: jmp 0x58793105
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 18h
        ; Exact mapped bytes 7F 5F: jg 0x5879316a
        __asm _emit 0x7f
        __asm _emit 0x5f
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        lea edx, [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 65 FF FF FF: call 0x58793080
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 14h]
        add edx, 47h
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 53h
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        cmp edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 7E 25: jle 0x58793168
        __asm _emit 0x7e
        __asm _emit 0x25
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        cmp ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 7D 1B: jge 0x58793168
        __asm _emit 0x7d
        __asm _emit 0x1b
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7E 10: jle 0x58793168
        __asm _emit 0x7e
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7D 05: jge 0x58793168
        __asm _emit 0x7d
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes EB 05: jmp 0x5879316d
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes EB 92: jmp 0x587930fc
        __asm _emit 0xeb
        __asm _emit 0x92
        or eax, 0ffffffffh
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 D9 DE 09 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xde
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
