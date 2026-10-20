// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041B80A .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_0041b80a_0041B80A() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        mov ecx, dword ptr [ebp + 18h]
        mov edi, dword ptr [ebp + 0ch]
        mov eax, dword ptr [esi + 24h]
        push 0
        push dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        neg eax
        push dword ptr [ebp + 14h]
        sbb eax, eax
        and eax, 2
        push esi
        inc eax
        push edi
        inc eax
        push eax
        push ecx
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        test edi, edi
        mov ebx, eax
        ; Exact mapped bytes 7E 11: jle 0x41b84d
        __asm _emit 0x7e
        __asm _emit 0x11
        add esi, 14h
        push dword ptr [esi]
        ; Exact mapped bytes E8 CF 20 01 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        add esi, 34h
        dec edi
        pop ecx
        ; Exact mapped bytes 75 F2: jne 0x41b83f
        __asm _emit 0x75
        __asm _emit 0xf2
        pop edi
        mov eax, ebx
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
