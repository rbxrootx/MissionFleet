// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040E94A .. +0xDB bytes.
extern "C" __declspec(naked) void FUN_0040e94a_0040E94A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 840h
        mov dword ptr [ebp - 840h], ecx
        lea ecx, [ebp - 834h]
        ; Exact mapped bytes E8 0C 01 00 00: call 0x40ea70
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 840h]
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes E8 CB 60 FF FF: call 0x404a41
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 83ch], eax
        lea edx, [ebp - 838h]
        push edx
        ; Exact mapped bytes E8 9A E2 01 00: call 0x42cc22
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xe2
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp - 83ch], -1
        ; Exact mapped bytes 74 23: je 0x40e9b4
        __asm _emit 0x74
        __asm _emit 0x23
        push 834h
        lea eax, [ebp - 834h]
        push eax
        mov ecx, dword ptr [ebp - 83ch]
        push ecx
        mov edx, dword ptr [ebp - 840h]
        mov ecx, dword ptr [edx + 4]
        ; Exact mapped bytes E8 61 61 FF FF: call 0x404b13
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x61
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 6B: jmp 0x40ea1f
        __asm _emit 0xeb
        __asm _emit 0x6b
        push 834h
        push 0
        lea eax, [ebp - 834h]
        push eax
        ; Exact mapped bytes E8 19 01 01 00: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 44988ch
        lea edx, [ebp - 834h]
        push edx
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 838h]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 AE 59 FF FF: call 0x4043a0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x59
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 838h]
        push ecx
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 9F 59 FF FF: call 0x4043a0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x59
        __asm _emit 0xff
        __asm _emit 0xff
        lea edx, [ebp - 838h]
        push edx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 90 59 FF FF: call 0x4043a0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x59
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 838h]
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 81 59 FF FF: call 0x4043a0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x59
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
