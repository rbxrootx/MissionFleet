// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E81F0 .. +0x7C bytes.
extern "C" __declspec(naked) void FUN_586e81f0_586E81F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 09 FD D9 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xfd
        __asm _emit 0xd9
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 2]
        push ecx
        ; Exact mapped bytes E8 9F F0 D9 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xf0
        __asm _emit 0xd9
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 10h], eax
        mov dl, byte ptr [ebp - 3]
        mov byte ptr [ebp - 1], dl
        mov eax, dword ptr [ebp - 10h]
        push eax
        movzx ecx, byte ptr [ebp - 1]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C2 90 DB FF: call 0x584a12f0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x90
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [eax + 4]
        sub eax, dword ptr [ecx]
        cdq
        mov ecx, 18h
        idiv ecx
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 8]
        add edx, 4
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 5E F6 FF FF: call 0x586e78c0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
