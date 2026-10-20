// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00436D00 .. +0xB6 bytes.
extern "C" __declspec(naked) void FUN_00436d00_00436D00() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        push -1
        push -1
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AD 5D 05 00: call 0x48cad0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x5d
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], 5812d0h
        mov esi, esp
        push 5b5aa0h
        mov edx, dword ptr [ebp - 4]
        add edx, 6ch
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 99 1A 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x1a
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 1a4h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 1a8h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 1ach], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 1b0h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 1b4h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 1b8h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 1bch], 0
        mov eax, dword ptr [ebp - 4]
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 30 1A 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x1a
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
