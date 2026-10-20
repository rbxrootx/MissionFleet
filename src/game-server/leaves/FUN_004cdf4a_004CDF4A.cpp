// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CDF4A .. +0xB2 bytes.
extern "C" __declspec(naked) void FUN_004cdf4a_004CDF4A() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57c718h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 0ch
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 14h], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7D 07: jge 0x4cdf7c
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp + 0ch], 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 35 2F 06 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x2f
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 7C 19: jl 0x4cdfa5
        __asm _emit 0x7c
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E2 F4 01 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        or al, 1
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 47: jmp 0x4cdfec
        __asm _emit 0xeb
        __asm _emit 0x47
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 5A 2F 06 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x2f
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        push 0
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 C1 F8 01 00: call 0x4ed889
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xf8
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A6 F4 01 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        or ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 63 F8 01 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xf8
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
