// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047DDA0 .. +0x8B bytes.
extern "C" __declspec(naked) void FUN_0047dda0_0047DDA0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57c241h
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
        mov dword ptr [ebp - 18h], 0cccccccch
        mov dword ptr [ebp - 14h], 0cccccccch
        mov dword ptr [ebp - 10h], 0cccccccch
        mov eax, dword ptr [ebp + 8]
        push eax
        push 34h
        ; Exact mapped bytes E8 55 EF F9 FF: call 0x41cd30
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xef
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 11: je 0x47ddff
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 36 00 00 00: call 0x47de30
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x47de06
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 10h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        cmp ebp, esp
        ; Exact mapped bytes E8 B9 A9 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xa9
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
