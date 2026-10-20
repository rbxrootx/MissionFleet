// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588C9250 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_588c9250() {
    __asm {
        movzx eax, word ptr [esp + 4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + eax*4 + 17ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 0ch]
        mov edx, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, esi
        ; Exact mapped bytes E8 DE F7 FF FF: call 0x588c8a50
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
