// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ED36C .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_004ed36c_004ED36C() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58e24fh
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
        sub esp, 58h
        mov dword ptr [ebp - 64h], ecx
        mov eax, dword ptr [ebp - 64h]
        push eax
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 DD B5 FF FF: call 0x4e8973
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        push 0
        lea ecx, [ebp - 60h]
        push ecx
        mov edx, dword ptr [ebp - 64h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes FF 90 E4 00 00 00: call dword ptr [eax + 0xe4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 60h]
        push ecx
        mov edx, dword ptr [ebp - 64h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes FF 90 F8 00 00 00: call dword ptr [eax + 0xf8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 65 B6 FF FF: call 0x4e8a37
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
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
        ret
    }
}
