// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C4EB0 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_587c4eb0() {
    __asm {
        push esi
        lea esi, [ecx - 8]
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx + 4]
        lea eax, [esi + 8]
        mov dword ptr [edx + eax - 8], 5899ad94h
        push eax
        mov dword ptr [eax], 5899ad8ch
        ; Exact mapped bytes E8 46 CC 1A 00: call 0x58971b16
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xcc
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x587c4ee3
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 62 7D 1B 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x7d
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
