// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883AAEB .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_5883aaeb_5883AAEB() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        push dword ptr [ebp + 0ch]
        mov esi, ecx
        ; Exact mapped bytes E8 80 FC FF FF: call 0x5883a779
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        add eax, 10h
        mov ecx, esi
        push eax
        push 0
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CD FE FF FF: call 0x5883a9d7
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        pop esi
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
