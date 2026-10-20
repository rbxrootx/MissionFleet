// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041B438 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_0041b438_0041B438() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        and dword ptr [ebp - 8], 0
        push esi
        mov esi, ecx
        ; Exact mapped bytes E8 F6 F9 FF FF: call 0x41ae3f
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        lea edx, [ebp - 4]
        lea eax, [esi + 0ch]
        push edx
        lea edx, [ebp - 8]
        push edx
        mov dl, byte ptr [ebp + 0ch]
        neg dl
        sbb edx, edx
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [esi]
        and edx, 2
        dec edx
        mov ecx, dword ptr [eax]
        push edx
        push dword ptr [ebp + 8]
        push 0
        push eax
        ; Exact mapped bytes FF 51 14: call dword ptr [ecx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 75 18: jne 0x41b48c
        __asm _emit 0x75
        __asm _emit 0x18
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 15 00 00 00: call 0x41b491
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 7D 07: jge 0x41b489
        __asm _emit 0x7d
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 B6 F9 FF FF: call 0x41ae3f
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, edi
        pop edi
        pop esi
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
