// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F182C .. +0x46 bytes.
extern "C" __declspec(naked) void _GetCurrentMessage_CWnd__KGPBUtagMSG__XZ_004F182C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov ecx, 5de7b4h
        ; Exact mapped bytes E8 04 0C 05 00: call 0x542440
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x0c
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes FF 15 EC 25 5E 00: call dword ptr [0x5e25ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 44h], eax
        ; Exact mapped bytes FF 15 F0 25 5E 00: call dword ptr [0x5e25f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 6C 41 04 00: call 0x5359c6
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x41
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 48h], edx
        mov dword ptr [ecx + 4ch], eax
        mov eax, dword ptr [ebp - 4]
        add eax, 34h
        mov esp, ebp
        pop ebp
        ret
    }
}
