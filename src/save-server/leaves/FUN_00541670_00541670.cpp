// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00541670 .. +0xEB bytes.
extern "C" __declspec(naked) void FUN_00541670_00541670() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58d739h
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
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BC F9 FF FF: call 0x541050
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 88h
        ; Exact mapped bytes E8 F9 04 FF FF: call 0x531ba2
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 90h
        ; Exact mapped bytes E8 EB 04 FF FF: call 0x531ba2
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 6384bch
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 98h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 78h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 7ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 80h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 84h], 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 88h], 10h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 8ch], 0fh
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 90h], 17h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 94h], 16h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 48h], 3
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 4ch], 3
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
        mov esp, ebp
        pop ebp
        ret
    }
}
