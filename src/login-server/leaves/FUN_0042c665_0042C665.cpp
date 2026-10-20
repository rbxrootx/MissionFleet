// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042C665 .. +0x7C bytes.
extern "C" __declspec(naked) void FUN_0042c665_0042C665() {
    __asm {
        mov eax, 43a793h
        ; Exact mapped bytes E8 99 2F FF FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        and dword ptr [ebp - 10h], 0
        test edx, edx
        ; Exact mapped bytes 7D 02: jge 0x42c67d
        __asm _emit 0x7d
        __asm _emit 0x02
        xor edx, edx
        mov eax, dword ptr [ecx]
        cmp edx, dword ptr [eax - 8]
        ; Exact mapped bytes 7C 0E: jl 0x42c692
        __asm _emit 0x7c
        __asm _emit 0x0e
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 93 12 00 00: call 0x42d920
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 41: jmp 0x42c6d3
        __asm _emit 0xeb
        __asm _emit 0x41
        push esi
        ; Exact mapped bytes 8B 35 0C 9B 44 00: mov esi, dword ptr [0x449b0c]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        mov dword ptr [ebp + 0ch], esi
        mov eax, dword ptr [eax - 8]
        push 1
        pop esi
        sub eax, edx
        push 0
        push eax
        lea eax, [ebp + 0ch]
        push edx
        push eax
        mov dword ptr [ebp - 4], esi
        ; Exact mapped bytes E8 21 15 00 00: call 0x42dbd5
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        lea eax, [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 60 12 00 00: call 0x42d920
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        and byte ptr [ebp - 4], 0
        lea ecx, [ebp + 0ch]
        mov dword ptr [ebp - 10h], esi
        ; Exact mapped bytes E8 DC 14 00 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        pop esi
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
