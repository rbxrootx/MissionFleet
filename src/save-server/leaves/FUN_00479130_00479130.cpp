// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00479130 .. +0x4B1 bytes.
extern "C" __declspec(naked) void FUN_00479130_00479130() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], 0
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], 0
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 0ch], 0
        mov eax, dword ptr [ebp + 10h]
        and eax, 10h
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x479174
        __asm _emit 0x74
        __asm _emit 0x16
        mov dword ptr [ebp - 4], 0c000008fh
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        or edx, 1
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 2
        test ecx, ecx
        ; Exact mapped bytes 74 15: je 0x479193
        __asm _emit 0x74
        __asm _emit 0x15
        mov dword ptr [ebp - 4], 0c0000093h
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        or al, 2
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 10h]
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 74 16: je 0x4791b3
        __asm _emit 0x74
        __asm _emit 0x16
        mov dword ptr [ebp - 4], 0c0000091h
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        or ecx, 4
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 10h]
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x4791d3
        __asm _emit 0x74
        __asm _emit 0x16
        mov dword ptr [ebp - 4], 0c000008eh
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        or edx, 8
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 8
        test ecx, ecx
        ; Exact mapped bytes 74 15: je 0x4791f2
        __asm _emit 0x74
        __asm _emit 0x15
        mov dword ptr [ebp - 4], 0c0000090h
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        or al, 10h
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        and eax, 1
        neg eax
        sbb eax, eax
        inc eax
        and eax, 1
        shl eax, 4
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        and edx, 0ffffffefh
        or edx, eax
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], edx
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        and edx, 4
        neg edx
        sbb edx, edx
        inc edx
        and edx, 1
        shl edx, 3
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        and ecx, 0fffffff7h
        or ecx, edx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        and ecx, 8
        neg ecx
        sbb ecx, ecx
        inc ecx
        and ecx, 1
        shl ecx, 2
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        and al, 0fbh
        or eax, ecx
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], eax
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        and eax, 10h
        neg eax
        sbb eax, eax
        inc eax
        and eax, 1
        shl eax, 1
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        and edx, 0fffffffdh
        or edx, eax
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], edx
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        and edx, 20h
        neg edx
        sbb edx, edx
        inc edx
        and edx, 1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        and ecx, 0fffffffeh
        or ecx, edx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], ecx
        ; Exact mapped bytes E8 2A 0B 00 00: call 0x479dd0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x4792c2
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        or edx, 10h
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 0ch], edx
        mov ecx, dword ptr [ebp - 8]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 74 0E: je 0x4792da
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        or al, 8
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 0ch], eax
        mov edx, dword ptr [ebp - 8]
        and edx, 8
        test edx, edx
        ; Exact mapped bytes 74 0F: je 0x4792f3
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        or ecx, 4
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 0ch], ecx
        mov eax, dword ptr [ebp - 8]
        and eax, 10h
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x47930c
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        or edx, 2
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 0ch], edx
        mov ecx, dword ptr [ebp - 8]
        and ecx, 20h
        test ecx, ecx
        ; Exact mapped bytes 74 0E: je 0x479324
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        or al, 1
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 0ch], eax
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        and eax, 0c00h
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 800h
        ; Exact mapped bytes 77 1A: ja 0x479354
        __asm _emit 0x77
        __asm _emit 0x1a
        cmp dword ptr [ebp - 0ch], 800h
        ; Exact mapped bytes 74 2B: je 0x47936e
        __asm _emit 0x74
        __asm _emit 0x2b
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 49: je 0x479392
        __asm _emit 0x74
        __asm _emit 0x49
        cmp dword ptr [ebp - 0ch], 400h
        ; Exact mapped bytes 74 2E: je 0x479380
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes EB 4B: jmp 0x47939f
        __asm _emit 0xeb
        __asm _emit 0x4b
        cmp dword ptr [ebp - 0ch], 0c00h
        ; Exact mapped bytes 74 02: je 0x47935f
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 40: jmp 0x47939f
        __asm _emit 0xeb
        __asm _emit 0x40
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        or edx, 3
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], edx
        ; Exact mapped bytes EB 31: jmp 0x47939f
        __asm _emit 0xeb
        __asm _emit 0x31
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        and edx, 0fffffffch
        or edx, 2
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], edx
        ; Exact mapped bytes EB 1F: jmp 0x47939f
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        and edx, 0fffffffch
        or edx, 1
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], edx
        ; Exact mapped bytes EB 0D: jmp 0x47939f
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        and edx, 0fffffffch
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        and edx, 300h
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 35: je 0x4793e8
        __asm _emit 0x74
        __asm _emit 0x35
        cmp dword ptr [ebp - 10h], 200h
        ; Exact mapped bytes 74 1A: je 0x4793d6
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp dword ptr [ebp - 10h], 300h
        ; Exact mapped bytes 74 02: je 0x4793c7
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 31: jmp 0x4793f8
        __asm _emit 0xeb
        __asm _emit 0x31
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        and ecx, 0ffffffe3h
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx], ecx
        ; Exact mapped bytes EB 22: jmp 0x4793f8
        __asm _emit 0xeb
        __asm _emit 0x22
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        and ecx, 0ffffffe3h
        or ecx, 4
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx], ecx
        ; Exact mapped bytes EB 10: jmp 0x4793f8
        __asm _emit 0xeb
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        and ecx, 0ffffffe3h
        or ecx, 8
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp + 14h]
        and eax, 0fffh
        shl eax, 5
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        and edx, 0fffe001fh
        or edx, eax
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 20h]
        or edx, 1
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 20h], edx
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 20h]
        and edx, 0ffffffe1h
        or edx, 2
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 20h], edx
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx + 10h], eax
        mov edx, dword ptr [edx + 4]
        mov dword ptr [ecx + 14h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 50h]
        or ecx, 1
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 50h], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 50h]
        and ecx, 0ffffffe1h
        or ecx, 2
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 50h], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 1ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax + 40h], edx
        mov ecx, dword ptr [ecx + 4]
        mov dword ptr [eax + 44h], ecx
        ; Exact mapped bytes E8 72 09 00 00: call 0x479df0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp + 8]
        push edx
        push 1
        push 0
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 CC B8 68 00: call dword ptr [0x68b8cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        shr edx, 4
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 74 0D: je 0x4794ad
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        and ecx, 0fffffffeh
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        shr ecx, 3
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x4794c9
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        and al, 0fbh
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        shr eax, 2
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x4794e6
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        and edx, 0fffffff7h
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        shr edx, 1
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 74 0D: je 0x479502
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        and ecx, 0ffffffefh
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x47951b
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        and al, 0dfh
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        and eax, 3
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 3
        ; Exact mapped bytes 77 4D: ja 0x479579
        __asm _emit 0x77
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 24 8D E1 95 47 00: jmp dword ptr [ecx*4 + 0x4795e1]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xe1
        __asm _emit 0x95
        __asm _emit 0x47
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        and ah, 0f3h
        or ah, 0ch
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 31: jmp 0x479579
        __asm _emit 0xeb
        __asm _emit 0x31
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        and ah, 0f3h
        or ah, 8
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 1F: jmp 0x479579
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        and ah, 0f3h
        or ah, 4
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 0D: jmp 0x479579
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        and ah, 0f3h
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        shr eax, 2
        and eax, 7
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 0E: je 0x47959b
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp dword ptr [ebp - 18h], 1
        ; Exact mapped bytes 74 1A: je 0x4795ad
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp dword ptr [ebp - 18h], 2
        ; Exact mapped bytes 74 26: je 0x4795bf
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes EB 31: jmp 0x4795cc
        __asm _emit 0xeb
        __asm _emit 0x31
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        and dh, 0f3h
        or dh, 3
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax], edx
        ; Exact mapped bytes EB 1F: jmp 0x4795cc
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        and dh, 0f3h
        or dh, 2
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax], edx
        ; Exact mapped bytes EB 0D: jmp 0x4795cc
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        and dh, 0f3h
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 1ch]
        mov eax, dword ptr [ecx + 40h]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ecx + 44h]
        mov dword ptr [edx + 4], ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
