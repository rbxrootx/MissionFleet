// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883EB40 .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_5883eb40() {
    __asm {
        sub esp, 0ch
        xor eax, eax
        mov dword ptr [esp], eax
        mov dword ptr [esp + 4], eax
        mov dword ptr [esp + 8], eax
        mov eax, dword ptr [ecx + 110h]
        lea eax, [eax + eax*2]
        lea edx, [eax*4 - 0ch]
        xor eax, eax
        cmp dword ptr [ecx + 0f0h], 1
        lea ecx, [esp]
        setne al
        push ecx
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esp + 0ch], 0ch
        mov dword ptr [esp + 8], edx
        mov dword ptr [esp + 4], eax
        ; Exact mapped bytes E8 65 B8 F7 FF: call 0x587ba3f0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xb8
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 0ch
        ret
    }
}
