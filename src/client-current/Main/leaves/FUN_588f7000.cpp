// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588F7000 .. +0x18 bytes.
extern "C" __declspec(naked) void FUN_588f7000() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 8B 50 24: mov edx, dword ptr [eax + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes C6 46 60 00: mov byte ptr [esi + 0x60], 0
        __asm _emit 0xc6
        __asm _emit 0x46
        __asm _emit 0x60
        __asm _emit 0x00
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 8B 50 20: mov edx, dword ptr [eax + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x20
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes FF E2: jmp edx
        __asm _emit 0xff
        __asm _emit 0xe2
    }
}
