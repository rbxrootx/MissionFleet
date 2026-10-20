// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005084D6 .. +0x8E bytes.
extern "C" __declspec(naked) void _Dump_CDocManager__UBEXAAVCDumpContext___Z_005084D6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 AD 1E FD FF: call 0x4da398
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x1e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 25 D8 01 00: call 0x525d18
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 5A: je 0x508551
        __asm _emit 0x74
        __asm _emit 0x5a
        push 678154h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 47 03 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 4
        ; Exact mapped bytes E8 48 E5 01 00: call 0x526a57
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xe5
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 2C: je 0x508544
        __asm _emit 0x74
        __asm _emit 0x2c
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 4
        ; Exact mapped bytes E8 AA E5 01 00: call 0x526ad1
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xe5
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        push 67816ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 10 03 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 89 05 02 00: call 0x528acb
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB CE: jmp 0x508512
        __asm _emit 0xeb
        __asm _emit 0xce
        push 678178h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FA 02 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        push 67817ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 ED 02 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
