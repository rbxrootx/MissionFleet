// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850E440 .. +0x89 bytes.
extern "C" __declspec(naked) void FUN_5850e440_5850E440() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 10dach]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 10dach]
        ; Exact mapped bytes E8 3B 73 F8 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x73
        __asm _emit 0xf8
        __asm _emit 0xff
        add eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 09 CD 2A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xcd
        __asm _emit 0x2a
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 10dc0h]
        mov dword ptr [ebp - 14h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 10dach]
        ; Exact mapped bytes E8 FD 72 F8 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x72
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 CE CC 2A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xcc
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
