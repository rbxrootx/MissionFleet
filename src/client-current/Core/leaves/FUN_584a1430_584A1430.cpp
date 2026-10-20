// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A1430 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_584a1430_584A1430() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push 1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 92 21 00 00: call 0x584a35d0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 72 59 FE FF: call 0x58486dc0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x59
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        lea edx, [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 4]
        add eax, 4
        push eax
        ; Exact mapped bytes E8 5F 59 FE FF: call 0x58486dc0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x59
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        lea ecx, [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 8
        push edx
        ; Exact mapped bytes E8 4C 59 FE FF: call 0x58486dc0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x59
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 0ch], 1
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 0dh], 1
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
