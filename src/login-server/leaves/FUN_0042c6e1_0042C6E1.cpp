// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042C6E1 .. +0x78 bytes.
extern "C" __declspec(naked) void FUN_0042c6e1_0042C6E1() {
    __asm {
        mov eax, 43a7bfh
        ; Exact mapped bytes E8 1D 2F FF FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        push ecx
        mov eax, dword ptr [ebp + 0ch]
        and dword ptr [ebp - 10h], 0
        test eax, eax
        ; Exact mapped bytes 7D 02: jge 0x42c6f9
        __asm _emit 0x7d
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [ecx]
        cmp eax, dword ptr [edx - 8]
        ; Exact mapped bytes 7C 0E: jl 0x42c70e
        __asm _emit 0x7c
        __asm _emit 0x0e
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 17 12 00 00: call 0x42d920
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 3D: jmp 0x42c74b
        __asm _emit 0xeb
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 15 0C 9B 44 00: mov edx, dword ptr [0x449b0c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        push esi
        mov dword ptr [ebp + 0ch], edx
        push 1
        pop esi
        push 0
        push 0
        push eax
        lea eax, [ebp + 0ch]
        push eax
        mov dword ptr [ebp - 4], esi
        ; Exact mapped bytes E8 A9 14 00 00: call 0x42dbd5
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        lea eax, [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 E8 11 00 00: call 0x42d920
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        and byte ptr [ebp - 4], 0
        lea ecx, [ebp + 0ch]
        mov dword ptr [ebp - 10h], esi
        ; Exact mapped bytes E8 64 14 00 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x64
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
