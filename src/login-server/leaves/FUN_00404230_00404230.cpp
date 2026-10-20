// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00404230 .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_00404230_00404230() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 93 00 00 00: call 0x4042d0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 1
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 09: jmp 0x40424e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        sub eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7E 3B: jle 0x40428f
        __asm _emit 0x7e
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C0 00 00 00: call 0x404320
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE D0: movsx edx, al
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xd0
        cmp edx, 20h
        ; Exact mapped bytes 74 25: je 0x40428d
        __asm _emit 0x74
        __asm _emit 0x25
        mov esi, dword ptr [ebp - 4]
        add esi, 1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5A 00 00 00: call 0x4042d0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, eax
        ; Exact mapped bytes 7D 11: jge 0x40428b
        __asm _emit 0x7d
        __asm _emit 0x11
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E0 9D 02 00: call 0x42e06b
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x9d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x40428f
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB B6: jmp 0x404245
        __asm _emit 0xeb
        __asm _emit 0xb6
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
