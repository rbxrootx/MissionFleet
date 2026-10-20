// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00426180 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_00426180_00426180() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 83 EC 40: sub esp, 0x40
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8D 7D C0: lea edi, [ebp - 0x40]
        __asm _emit 0x8d
        __asm _emit 0x7d
        __asm _emit 0xc0
        ; Exact mapped bytes B9 10 00 00 00: mov ecx, 0x10
        __asm _emit 0xb9
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 CC CC CC CC: mov eax, 0xcccccccc
        __asm _emit 0xb8
        __asm _emit 0xcc
        __asm _emit 0xcc
        __asm _emit 0xcc
        __asm _emit 0xcc
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        ; Exact mapped bytes 68 D0 61 42 00: push 0x4261d0
        __asm _emit 0x68
        __asm _emit 0xd0
        __asm _emit 0x61
        __asm _emit 0x42
        __asm _emit 0x00
        ; Exact mapped bytes E8 4E FA 03 00: call 0x465bf0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xfa
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 83 C4 40: add esp, 0x40
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x40
        ; Exact mapped bytes 3B EC: cmp ebp, esp
        __asm _emit 0x3b
        __asm _emit 0xec
        ; Exact mapped bytes E8 3E EC 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xec
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
