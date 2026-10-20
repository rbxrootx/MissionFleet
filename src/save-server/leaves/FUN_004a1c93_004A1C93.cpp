// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A1C93 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_004a1c93_004A1C93() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        lea eax, [ebp + 10h]
        mov dword ptr [ebp - 8], eax
        lea ecx, [ebp - 8]
        push ecx
        push 0
        lea edx, [ebp - 4]
        push edx
        push 0
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 500h
        ; Exact mapped bytes FF 15 04 B8 68 00: call dword ptr [0x68b804]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x4a1cc6
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 05: jne 0x4a1ccb
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 11 12 00 00: call 0x4a2edc
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C6 AE 02 00: call 0x4ccb9d
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xae
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 14 BA 68 00: call dword ptr [0x68ba14]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
