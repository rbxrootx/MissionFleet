// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004601B0 .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_004601b0_004601B0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57ba89h
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
        push ecx
        mov dword ptr [ebp - 10h], 0cccccccch
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 15 F9 FF FF: call 0x45faf0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 8
        ; Exact mapped bytes E8 81 14 0D 00: call 0x53166e
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x14
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 581b64h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 8
        ; Exact mapped bytes E8 A9 14 0D 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x14
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 BD 85 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
