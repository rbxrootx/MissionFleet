// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00446240 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_00446240_00446240() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov al, byte ptr [ebp - 10h]
        mov byte ptr [ebp - 4], al
        lea ecx, [ebp - 4]
        push ecx
        mov dl, byte ptr [ebp + 14h]
        push edx
        push ecx
        mov ecx, esp
        lea eax, [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 80 FF FF FF: call 0x4461e0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push ecx
        mov ecx, esp
        lea edx, [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 74 FF FF FF: call 0x4461e0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 CB 10 00 00: call 0x447340
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
