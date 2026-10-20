// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00502345 .. +0x77 bytes.
extern "C" __declspec(naked) void FUN_00502345_00502345() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58d7c1h
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
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 95 29 02 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x29
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 33 00 00 00: call 0x5023bc
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 85 A1 FC FF: call 0x4cc51a
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        or al, 1
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 43 A5 FC FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xa5
        __asm _emit 0xfc
        __asm _emit 0xff
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
