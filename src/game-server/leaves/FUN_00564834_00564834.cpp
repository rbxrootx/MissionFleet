// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00564834 .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_00564834_00564834() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58024fh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 10h
        mov dword ptr [ebp - 1ch], ecx
        push 52h
        push 5d0bb4h
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 0bch]
        push ecx
        ; Exact mapped bytes E8 F8 68 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x68
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1ch]
        push edx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 5C A7 F2 FF: call 0x48efd0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xa7
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ecx + 0bch]
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 0bch]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 5C A7 F2 FF: call 0x48f010
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xa7
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
