// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047C2C0 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_0047c2c0_0047C2C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        ; Exact mapped bytes E8 02 9C FF FF: call 0x475ed0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes DB E3: fninit
        __asm _emit 0xdb
        __asm _emit 0xe3
        ; Exact mapped bytes E8 86 A8 FF FF: call 0x476b60
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xa8
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 31: je 0x47c311
        __asm _emit 0x74
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [edx]
        and eax, 10008h
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x47c311
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        add edx, 1ch
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 4], 0
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 8], 0ffffh
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
