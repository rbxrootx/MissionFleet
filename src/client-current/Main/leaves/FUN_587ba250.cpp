// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BA250 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_587ba250() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 14h]
        mov eax, esi
        push edi
        lea edi, [eax + 1]
        ; Exact mapped bytes EB 03: jmp 0x587ba260
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov dl, byte ptr [eax]
        inc eax
        test dl, dl
        ; Exact mapped bytes 75 F9: jne 0x587ba260
        __asm _emit 0x75
        __asm _emit 0xf9
        mov edx, dword ptr [esp + 14h]
        sub eax, edi
        push 0
        inc eax
        push eax
        mov eax, dword ptr [esp + 14h]
        shl eax, 10h
        or eax, dword ptr [esp + 18h]
        push esi
        push eax
        push edx
        push 80013200h
        ; Exact mapped bytes E8 E7 69 1B 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x69
        __asm _emit 0x1b
        __asm _emit 0x00
        pop edi
        pop esi
    }
}
