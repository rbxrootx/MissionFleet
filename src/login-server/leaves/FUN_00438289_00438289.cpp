// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00438289 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_00438289_00438289() {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        xor ebp, ebp
        push edi
        mov eax, dword ptr [esi]
        push ebp
        ; Exact mapped bytes 8B 3D 90 C2 43 00: mov edi, dword ptr [0x43c290]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x90
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push ebp
        push dword ptr [eax - 8]
        push eax
        push ebp
        push ebp
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push eax
        push ebp
        mov dword ptr [esp + 18h], eax
        ; Exact mapped bytes FF 15 40 C3 43 00: call dword ptr [0x43c340]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        mov ebx, eax
        cmp ebx, ebp
        ; Exact mapped bytes 75 05: jne 0x4382bb
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 66 4A FF FF: call 0x42cd21
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [esp + 10h]
        mov eax, dword ptr [esi]
        push ebx
        push dword ptr [eax - 8]
        push eax
        push ebp
        push ebp
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        pop edi
        pop esi
        mov eax, ebx
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}
