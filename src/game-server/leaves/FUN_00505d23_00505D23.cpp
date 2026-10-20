// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00505D23 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_00505d23_00505D23() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E2 BF 02 00: call 0x531d1a
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xbf
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        and ecx, 0ffffh
        cmp ecx, 0ffffh
        ; Exact mapped bytes 74 0A: je 0x505d53
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 8]
        and eax, 0ffffh
        ; Exact mapped bytes EB 0F: jmp 0x505d62
        __asm _emit 0xeb
        __asm _emit 0x0f
        lea edx, [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 16 C0 02 00: call 0x531d75
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
